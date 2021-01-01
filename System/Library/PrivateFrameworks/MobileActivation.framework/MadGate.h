/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileActivation/MobileActivation-Structs.h>
@class NSXPCConnection;

@interface MadGate : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)getUCRTActivationLockState:(id*)arg1 ;
-(id)getActivationState:(id*)arg1 ;
-(id)getActivationBuild:(id*)arg1 ;
-(BOOL)isUCRTAvailable:(id*)arg1 ;
-(id)copyPCRTToken:(id*)arg1 ;
-(BOOL)isDeviceABrick:(id*)arg1 ;
-(id)createTunnel1SessionInfo:(id*)arg1 ;
-(id)createTunnel1ActivationInfo:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)createActivationInfo:(id*)arg1 ;
-(BOOL)handleActivationInfo:(id)arg1 withError:(id*)arg2 ;
-(BOOL)handleActivationInfoWithSession:(id)arg1 activationSignature:(id)arg2 error:(id*)arg3 ;
-(BOOL)deactivateDevice:(id*)arg1 ;
-(BOOL)reactivateDevice:(id*)arg1 ;
-(id)copyActivationRecord:(id*)arg1 ;
-(BOOL)unbrickDevice:(id*)arg1 ;
-(BOOL)recertifyDeviceWithError:(id*)arg1 ;
-(id)issueClientCertificateLegacy:(id)arg1 error:(id*)arg2 ;
-(BOOL)isInFieldCollected:(id*)arg1 ;
-(void)updateBasebandTicket:(SecKeyRef)arg1 baaCert:(SecCertificateRef)arg2 baaIntermediateCert:(SecCertificateRef)arg3 options:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
@end
