/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NetworkUtils : NSObject
+(id)encryptionInfoForKey:(unsigned long long)arg1 ;
+(BOOL)createAndStartListener:(id*)arg1 withParameters:(id)arg2 ;
+(void)setUniquePIDOnParameters:(id)arg1 shouldRunInProcess:(BOOL)arg2 ;
+(int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(BOOL)arg3 error:(id*)arg4 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newEncryptionInfoWithMasterKeyIndex:(id)arg1 ;
+(BOOL)createNWPathEvaluator:(id*)arg1 withIPAddress:(id)arg2 localPort:(int*)arg3 remotePort:(int)arg4 shouldRunInProcess:(BOOL)arg5 ;
+(id)newNWConnectionWithIPAddress:(id)arg1 srcPort:(short)arg2 ;
+(int)nonConnectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newRTPSocketDictionary:(BOOL)arg1 rtpSourcePort:(short)arg2 ;
+(id)securityKeyMaterialWithMasterKeyIndex:(id)arg1 ;
@end

