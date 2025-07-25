{$IFDEF read_interface}


type
  PEfl_Net_Server_Udp_Client = ^TEfl_Net_Server_Udp_Client;
  TEfl_Net_Server_Udp_Client = TEo;

{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_SERVER_UDP_CLIENT_CLASS: PEfl_Class;

function efl_net_server_udp_client_class_get: PEfl_Class; cdecl; external libecore_con;
function efl_net_server_udp_client_next_datagram_size_query(obj: PEo): Tsize_t; cdecl; external libecore_con;
{$endif}

// === Konventiert am: 9-6-25 19:04:37 ===


{$ENDIF read_interface}


{$IFDEF read_implementation}


{$ifdef EFL_BETA_API_SUPPORT}
function EFL_NET_SERVER_UDP_CLIENT_CLASS: PEfl_Class;
begin
  EFL_NET_SERVER_UDP_CLIENT_CLASS := efl_net_server_udp_client_class_get;
end;
{$endif}


{$ENDIF read_implementation}
