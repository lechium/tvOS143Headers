/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AFCallSiteInfo;

@interface AFClientLite : NSObject {

	AFCallSiteInfo* _initiationCallSiteInfo;

}
-(id)init;
-(void)dealloc;
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 commandHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleOneWayCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

