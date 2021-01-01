/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DESecurityUtils : NSObject
+(id)randomDataOfLength:(unsigned long long)arg1 ;
+(id)getRandomKey;
+(id)getKeyFromData:(id)arg1 ;
+(id)getRandomIV;
+(id)sign:(id)arg1 privateKey:(id)arg2 ;
+(BOOL)verify:(id)arg1 expected:(id)arg2 publicKey:(id)arg3 ;
@end

