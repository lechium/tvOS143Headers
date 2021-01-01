/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CFSecurityUtils : NSObject
+(BOOL)verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)_dataForOperation:(unsigned)arg1 withInputData:(id)arg2 key:(id)arg3 iv:(id)arg4 ;
+(id)randomDataOfLength:(unsigned long long)arg1 ;
+(id)deriveKeyForPassword:(id)arg1 withSalt:(id)arg2 ;
+(id)encryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 ;
+(id)encryptData:(id)arg1 withPassword:(id)arg2 iv:(id*)arg3 salt:(id*)arg4 ;
+(id)decryptData:(id)arg1 withPassword:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)deriveKeyForSaltedKey:(id)arg1 withSalt:(id)arg2 ;
+(id)deriveConsistentKeyForPassword:(id)arg1 ;
@end

