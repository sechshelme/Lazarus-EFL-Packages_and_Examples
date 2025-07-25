{$IFDEF read_interface}


type
  PEfl_Net_Server_Ip = ^TEfl_Net_Server_Ip;
  TEfl_Net_Server_Ip = TEo;

{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_SERVER_IP_CLASS: PEfl_Class;

function efl_net_server_ip_class_get: PEfl_Class; cdecl; external libecore_con;
procedure efl_net_server_ip_ipv6_only_set(obj: PEo; ipv6_only: TEina_Bool); cdecl; external libecore_con;
function efl_net_server_ip_ipv6_only_get(obj: PEo): TEina_Bool; cdecl; external libecore_con;
{$endif}

// === Konventiert am: 9-6-25 19:04:27 ===


{$ENDIF read_interface}


{$IFDEF read_implementation}


{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_SERVER_IP_CLASS: PEfl_Class;
begin
  EFL_NET_SERVER_IP_CLASS := efl_net_server_ip_class_get;
end;
{$endif}


{$ENDIF read_implementation}
