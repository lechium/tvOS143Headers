/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/_SUICRingLayer.h>

@interface _SUICProgressRingLayer : _SUICRingLayer {

	BOOL _spinning;
	double _progress;

}

@property (assign,nonatomic) BOOL spinning;                //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(id)init;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)spinning;
@end

