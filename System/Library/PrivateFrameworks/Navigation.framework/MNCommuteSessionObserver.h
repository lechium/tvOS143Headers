/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNCommuteSessionObserver <NSObject>
@optional
-(void)commuteSessionDidArrive:(id)arg1;
-(void)commuteSession:(id)arg1 didChangeToState:(unsigned long long)arg2;

@required
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;

@end

