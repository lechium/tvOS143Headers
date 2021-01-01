/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductActivityViewController.h>

@class SKStoreProductActivityViewController, NSString;

@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController> {

	SKStoreProductActivityViewController* _productActivityViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductActivityViewController * productActivityViewController;              //@synthesize productActivityViewController=_productActivityViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setProductActivityViewController:(SKStoreProductActivityViewController *)arg1 ;
-(SKStoreProductActivityViewController *)productActivityViewController;
@end

