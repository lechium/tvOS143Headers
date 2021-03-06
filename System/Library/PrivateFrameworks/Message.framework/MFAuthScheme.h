/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MFAuthScheme : NSObject
+(void)initialize;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(void)registerSchemeClass:(Class)arg1 ;
+(id)authSchemesForAccount:(id)arg1 connection:(id)arg2 ;
-(id)name;
-(id)humanReadableName;
-(BOOL)requiresPassword;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(Class)authenticatorClass;
-(unsigned)defaultPortForAccount:(id)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
@end

