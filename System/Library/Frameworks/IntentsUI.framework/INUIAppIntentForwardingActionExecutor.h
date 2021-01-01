/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/INIntentDelivererDelegate.h>
#import <libobjc.A.dylib/INIntentDelivererDataSource.h>

@class INIntentDeliverer, UIApplication, NSString;

@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDelivererDelegate, INIntentDelivererDataSource> {

	id _handlerForIntent;
	INIntentDeliverer* _intentDeliverer;
	SCD_Struct_IN0 _currentHostProcessAuditToken;
	UIApplication* _application;

}

@property (nonatomic,retain) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_IN0)auditTokenForIntentDeliverer:(id)arg1 ;
-(void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(void)executeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

