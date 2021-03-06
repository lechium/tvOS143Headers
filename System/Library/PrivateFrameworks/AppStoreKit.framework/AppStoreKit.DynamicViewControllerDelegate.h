/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/AMSUIDynamicViewControllerDelegate.h>

@interface AppStoreKit.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {

	 subscriptionManager;
	 purchaseSuccessHandler;
	 purchaseFailureHandler;
	 didDismissHandler;
	 contentViewConstructor;

}
-(id)init;
-(id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(CGRect)arg3 ;
-(void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3 ;
-(void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3 ;
@end

