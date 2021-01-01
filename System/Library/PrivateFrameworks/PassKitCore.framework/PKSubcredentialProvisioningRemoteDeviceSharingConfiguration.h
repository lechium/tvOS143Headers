/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration.h>

@protocol PKSubcredentialProvisioningUserAuthDelegate;
@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingSession;

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration {

	PKAppletSubcredentialSharingRequest* _sharingRequest;
	PKAppletSubcredentialSharingSession* _sharingSession;
	id<PKSubcredentialProvisioningUserAuthDelegate> _userAuthDelegate;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingRequest * sharingRequest;                                 //@synthesize sharingRequest=_sharingRequest - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingSession * sharingSession;                                 //@synthesize sharingSession=_sharingSession - In the implementation block
@property (nonatomic,__weak,readonly) id<PKSubcredentialProvisioningUserAuthDelegate> userAuthDelegate;              //@synthesize userAuthDelegate=_userAuthDelegate - In the implementation block
-(id)description;
-(id)transitionTable;
-(PKAppletSubcredentialSharingSession *)sharingSession;
-(long long)startingState;
-(id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5 ;
-(PKAppletSubcredentialSharingRequest *)sharingRequest;
-(id<PKSubcredentialProvisioningUserAuthDelegate>)userAuthDelegate;
@end
