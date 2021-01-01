/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MRGestureRecognizer.h>

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {

	NSString* _type;
	double _factor;
	int _direction;
	BOOL _isMaster;

}

@property (readonly) int direction;              //@synthesize direction=_direction - In the implementation block
-(void)dealloc;
-(int)direction;
-(void)_postProcess;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(void)touchMoved:(id)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 direction:(int)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 masterAction:(id)arg2 direction:(int)arg3 andSender:(id)arg4 ;
@end

