/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol ENCypher <NSSecureCoding,NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5;

@end

