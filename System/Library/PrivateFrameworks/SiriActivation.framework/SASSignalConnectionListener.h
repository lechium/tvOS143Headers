/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>

@class BSServiceConnectionListener, NSString;

@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {

	BSServiceConnectionListener* _listener;

}

@property (nonatomic,retain) BSServiceConnectionListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)listener;
-(id)init;
-(id)_init;
-(BSServiceConnectionListener *)listener;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
@end

