/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTIDService <NSObject>
@required
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1;
-(id)IDFieldsForTopic:(id)arg1 options:(id)arg2;
-(id)resetIDForTopics:(id)arg1 options:(id)arg2;
-(void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;

@end

