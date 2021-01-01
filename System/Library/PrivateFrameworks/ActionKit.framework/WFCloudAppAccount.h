/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFPasswordAccount.h>
#import <libobjc.A.dylib/CLAPIEngineDelegate.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppAccount : WFPasswordAccount <CLAPIEngineDelegate> {

	CLAPIEngine* _engine;

}

@property (nonatomic,readonly) CLAPIEngine * engine;                //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceID;
+(id)localizedServiceName;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
-(void)dealloc;
-(CLAPIEngine *)engine;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end

