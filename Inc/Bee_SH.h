//

extern const char Bee_Msg_Welcome[]; 
extern const char Bee_Msg_SysInit_OK[];
extern const char Bee_Msg_Entering_Main[];
extern const char Bee_Msg_Main_Top[];

typedef enum
{
  No_CrLf = 0U,
  CrLf_Only,
  CrLf_Time
} CrLf_State;

void BeeSH_Init(void);
void BeeSH_Rx(void);
void BeeSH_Tx(char *,CrLf_State);