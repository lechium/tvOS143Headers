/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSMediaTask, NSArray;

@interface MTMediaTask : NSObject {

	BOOL _charts;
	AMSMediaTask* _mediaTask;

}

@property (nonatomic,retain) AMSMediaTask * mediaTask;              //@synthesize mediaTask=_mediaTask - In the implementation block
@property (nonatomic,retain) NSArray * identifiers; 
@property (assign,nonatomic) BOOL charts;                           //@synthesize charts=_charts - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(BOOL)charts;
-(void)setCharts:(BOOL)arg1 ;
-(AMSMediaTask *)mediaTask;
-(void)setMediaTask:(AMSMediaTask *)arg1 ;
@end
