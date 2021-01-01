/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFECDHOperation, _SFAuthenticatedEncryptionOperation, _SFKeySpecifier, NSString;

@interface _SFIESOperation : NSObject <_SFEncryptionOperation> {

	id _iesOperationInternal;
	long long _curve;

}

@property (nonatomic,copy) _SFECDHOperation * diffieHellmanOperation; 
@property (nonatomic,copy) _SFAuthenticatedEncryptionOperation * encryptionOperation; 
@property (assign) long long curve;                                                                //@synthesize curve=_curve - In the implementation block
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(id)initWithCurve:(long long)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(_SFAuthenticatedEncryptionOperation *)encryptionOperation;
-(void)setEncryptionOperation:(_SFAuthenticatedEncryptionOperation *)arg1 ;
-(_SFECDHOperation *)diffieHellmanOperation;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(id)initWithCurve:(long long)arg1 diffieHellmanOperation:(id)arg2 encryptionOperation:(id)arg3 digestOperation:(id)arg4 ;
-(const ccdigest_info*)_ccDigestInfoWithError:(id*)arg1 ;
-(void)setDiffieHellmanOperation:(_SFECDHOperation *)arg1 ;
@end

