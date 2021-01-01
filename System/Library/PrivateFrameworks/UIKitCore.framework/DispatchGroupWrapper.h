/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface DispatchGroupWrapper : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)notify:(/*^block*/id)arg1 ;
-(void)executeWithDispatchGroup:(/*^block*/id)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

