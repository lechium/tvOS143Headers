/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFKey.h>

@class _SFPublicKey, NSString;

@interface _SFKeyPair : _SFKey {

	id _keyPairInternal;

}

@property (getter=_secKey,nonatomic,readonly) _SecKey* secKey; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain; 
+(Class)_attributesClass;
+(id)_secKeyCreationAttributesForSpecifier:(id)arg1 ;
-(_SFPublicKey *)publicKey;
-(id)initWithAttributes:(id)arg1 ;
-(id)keyData;
-(_SecKey*)_secKey;
-(NSString *)privateKeyDomain;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithSecKey:(_SecKey*)arg1 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(id)arg2 ;
-(id)initRandomKeyPairWithSpecifier:(id)arg1 ;
@end
