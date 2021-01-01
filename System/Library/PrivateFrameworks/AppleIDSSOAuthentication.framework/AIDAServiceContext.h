/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleIDSSOAuthentication/AppleIDSSOAuthentication-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;
@class NSDictionary, UIViewController;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying> {

	NSDictionary* _authenticationResults;
	BOOL _shouldForceOperation;
	long long _operationUIPermissions;
	UIViewController* _viewController;
	id<AASignInFlowControllerDelegate> _aaSignInFlowControllerDelegate;
	id<AASignOutFlowControllerDelegate> _aaSignOutFlowControllerDelegate;
	NSDictionary* _signInContexts;
	NSDictionary* _signOutContexts;
	id<CDPStateUIProvider> _cdpUiProvider;

}

@property (nonatomic,copy,readonly) NSDictionary * authenticationResults;                                        //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceOperation;                                                        //@synthesize shouldForceOperation=_shouldForceOperation - In the implementation block
@property (nonatomic,readonly) long long operationUIPermissions;                                                 //@synthesize operationUIPermissions=_operationUIPermissions - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSDictionary * signInContexts;                                                    //@synthesize signInContexts=_signInContexts - In the implementation block
@property (nonatomic,readonly) NSDictionary * signOutContexts;                                                   //@synthesize signOutContexts=_signOutContexts - In the implementation block
@property (nonatomic,readonly) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate;                //@synthesize aaSignInFlowControllerDelegate=_aaSignInFlowControllerDelegate - In the implementation block
@property (nonatomic,readonly) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate;              //@synthesize aaSignOutFlowControllerDelegate=_aaSignOutFlowControllerDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<CDPStateUIProvider> cdpUiProvider;                                      //@synthesize cdpUiProvider=_cdpUiProvider - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(id)contextWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDictionary *)authenticationResults;
-(BOOL)shouldForceOperation;
-(long long)operationUIPermissions;
-(UIViewController *)viewController;
-(NSDictionary *)signInContexts;
-(NSDictionary *)signOutContexts;
-(id<AASignInFlowControllerDelegate>)aaSignInFlowControllerDelegate;
-(id<AASignOutFlowControllerDelegate>)aaSignOutFlowControllerDelegate;
-(id<CDPStateUIProvider>)cdpUiProvider;
@end

