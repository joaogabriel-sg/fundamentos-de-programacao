/*
1. Declare uma estrutura C capaz de guardar os seguintes dados relativos a um
prontuário médico:
  a) identificador (int)
  b) Nome do paciente (string de 50)
  c) Altura (float)
  e) Idade (int)
  f) Peso (float)
Declare um novo tipo C chamado Paciente que deve ser exatamente a estrutura acima.

2. Crie uma lista de estruturas do tipo Paciente

3. Crie as seguintes funções:
	-Inicializar a lista
    -Imprimir um Paciente
    -Inserir um Paciente
    -Editar um Paciente
        Busca pelo nome
    -Apagar um Paciente
        Busca pelo identificador 

4. Crie as seguintes funções
	-media de idade dos pacientes
	-imprima as informações do paciente mais pesado
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int id;
  char name[50];
  int age;
  float height;
  float weight;
} MedicalRecords;

typedef struct
{
  int id;
  char name[50];
  int age;
  float height;
  float weight;
} Patient;

Patient readPatientData()
{
  Patient patient;

  printf("Identificador numérico do paciente: ");
  scanf("%d", &patient.id);

  printf("Nome completo do paciente: ");
  scanf("%s", patient.name);

  printf("Idade do paciente (anos): ");
  scanf("%d", &patient.age);

  printf("Altura do paciente (m): ");
  scanf("%f", &patient.height);

  printf("Peso do paciente (kg): ");
  scanf("%f", &patient.weight);

  return patient;
}

void printPatient(Patient patient)
{
  printf("\nPACIENTE\n");
  printf("Identificador numérico: %d\n", patient.id);
  printf("Nome completo: %s\n", patient.name);
  printf("Idade: %d anos\n", patient.age);
  printf("Altura: %.2fm\n", patient.height);
  printf("Peso: %.2fkg\n", patient.weight);
}

void printPatientById(Patient patientList[], int patientsLength)
{
  int id = 0, isIdExistent = 0;
  printf("\nBUSCAR PACIENTE PELO IDENTIFICADOR\n");
  printf("Identificador númerico: ");
  scanf("%d", &id);

  for (int i = 0; i < patientsLength; i++)
    if (patientList[i].id == id)
    {
      isIdExistent = 1;
      printPatient(patientList[i]);
    }

  if (isIdExistent == 0)
    printf("\nPACIENTE INEXISTENTE COM ESSE IDENTIFICADOR NUMÉRICO\n");
}

void showTheHeaviestPatient(Patient patientList[], int patientsLength)
{
  int arePatientsExistents = 0;
  Patient heaviestPatient;

  for (int i = 0; i < patientsLength; i++)
  {
    if (patientList[i].id != -1)
    {
      if (i == 0 || patientList[i].weight > heaviestPatient.weight)
      {
        heaviestPatient = patientList[i];
        arePatientsExistents = 1;
      }
    }
  }

  if (arePatientsExistents == 1)
    printPatient(heaviestPatient);
  else
    printf("\nNÃO EXISTEM PACIENTES CADASTRADOS!\n");
}

void calculatePatientsAgeAverage(Patient patientList[], int patientsLength)
{
  int ageSum = 0, quantityOfValidPatients = 0;

  for (int i = 0; i < patientsLength; i++)
  {
    if (patientList[i].id != -1)
    {
      ageSum += patientList[i].age;
      quantityOfValidPatients++;
    }
  }

  if (quantityOfValidPatients != 0)
  {
    float average = (ageSum * 1.0) / (quantityOfValidPatients * 1.0);
    printf("\nMÉDIA DAS IDADES: %.1f ANOS\n", average);
  }
  else
  {
    printf("\nNÃO EXISTEM PACIENTES CADASTRADOS!\n");
  }
}

void deletePatientById(Patient patientList[], int patientsLength)
{
  int deletedId = 0, isPatientDeleted = 0;
  printf("\nDELETAR PACIENTE PELO IDENTIFICADOR NUMÉRICO\n");
  printf("Identificador numérico do paciente: ");
  scanf("%d", &deletedId);

  for (int i = 0; i < patientsLength; i++)
  {
    if (patientList[i].id == deletedId)
    {
      Patient patientEmpty;
      patientEmpty.id = -1;

      patientList[i] = patientEmpty;
      isPatientDeleted = 1;
    }
    else
    {
      patientList[i] = patientList[i];
    }
  }

  if (isPatientDeleted == 1)
    printf("\nPACIENTE DELETADO!\n");
  else
    printf("\nPACIENTE INEXISTENTE!\n");
}

void editPatientByName(Patient patientList[], int patientsLength)
{
  int isPatientExistent = 0;
  char nameToEdit[50];
  printf("\nEDITAR PACIENTE PELO NOME\n");
  printf("Nome do paciente: ");
  scanf("%s", nameToEdit);

  for (int i = 0; i < patientsLength; i++)
  {
    if (strcmp(patientList[i].name, nameToEdit) == 0)
    {
      printf("\nNOVOS DADOS DO PACIENTE %s - %d\n", patientList[i].name, patientList[i].id);
      Patient edittedPatient = readPatientData();
      patientList[i] = edittedPatient;
      isPatientExistent = 1;
    }
  }

  if (isPatientExistent == 1)
    printf("\nPACIENTE EDITADO!\n");
  else
    printf("\nPACIENTE INEXISTENTE!\n");
}

void createNewPatient(Patient patientList[], int patientsLength)
{
  int isNewPatientCreated = 0;
  printf("\nCADASTRO DE UM NOVO PACIENTE\n");

  for (int i = 0; i < patientsLength; i++)
  {
    if (patientList[i].id == -1)
    {
      Patient newPatient = readPatientData();
      patientList[i] = newPatient;
      isNewPatientCreated = 1;
      break;
    }
  }

  if (isNewPatientCreated == 1)
    printf("\nNOVO PACIENTE CADASTRADO!\n");
  else
    printf("\nNÃO FOI POSSÍVEL CADASTRAR O NOVO PACIENTE!\n");
}

void initPatientList(Patient patientList[], int patientsLength)
{
  for (int i = 0; i < patientsLength; i++)
    patientList[i].id = -1;

  printf("\nLISTA DE PACIENTES INICIALIZADA!\n");
}

void printOptionMenu()
{
  printf("\nGERENCIAMENTO DE PRONTUÁRIOS MÉDICOS\n");
  printf("  1 - Inicializar a lista de pacientes.\n");
  printf("  2 - Imprimir um paciente pelo identificador.\n");
  printf("  3 - Inserir um paciente.\n");
  printf("  4 - Editar um paciente pelo nome.\n");
  printf("  5 - Apagar um paciente pelo identificador.\n");
  printf("  6 - Média das idades dos pacientes.\n");
  printf("  7 - Imprimir dados do paciente mais pesado.\n");
  printf("  -1 para sair do sistema.\n");
  printf("Opção: ");
}

int main()
{
  int patientsLength = 3;
  Patient patientList[patientsLength];

  int option = 0;
  do
  {
    printOptionMenu();
    scanf("%d", &option);

    if (option == 0 || option < -1 || option > 7)
      printf("\nOPÇÃO INVÁLIDA!\n");
    else if (option == 1)
      initPatientList(patientList, patientsLength);
    else if (option == 2)
      printPatientById(patientList, patientsLength);
    else if (option == 3)
      createNewPatient(patientList, patientsLength);
    else if (option == 4)
      editPatientByName(patientList, patientsLength);
    else if (option == 5)
      deletePatientById(patientList, patientsLength);
    else if (option == 6)
      calculatePatientsAgeAverage(patientList, patientsLength);
    else if (option == 7)
      showTheHeaviestPatient(patientList, patientsLength);
    else
      break;
  } while (option != -1);

  printf("\nObrigado por usar o sistema :)\n");

  return 0;
}
