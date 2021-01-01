/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	BOOL _acceptLocalDeviceInvitation;
	BOOL _acceptRemoteDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _localDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;

}

@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * localDeviceInvitation;               //@synthesize localDeviceInvitation=_localDeviceInvitation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;              //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptLocalDeviceInvitation;                                             //@synthesize acceptLocalDeviceInvitation=_acceptLocalDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptRemoteDeviceInvitation;                                            //@synthesize acceptRemoteDeviceInvitation=_acceptRemoteDeviceInvitation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)localDeviceInvitation;
-(BOOL)acceptRemoteDeviceInvitation;
-(BOOL)acceptLocalDeviceInvitation;
-(id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 ;
-(void)setAcceptLocalDeviceInvitation:(BOOL)arg1 ;
-(void)setAcceptRemoteDeviceInvitation:(BOOL)arg1 ;
-(void)setLocalDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
@end

