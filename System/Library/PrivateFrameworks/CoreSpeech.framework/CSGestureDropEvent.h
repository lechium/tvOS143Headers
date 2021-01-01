/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSGestureDropEvent : NSObject {

	double _droppingPrediction;
	double _droppedPrediction;
	double _timestamp;

}

@property (nonatomic,readonly) double droppingPrediction;                       //@synthesize droppingPrediction=_droppingPrediction - In the implementation block
@property (nonatomic,readonly) double droppedPrediction;                        //@synthesize droppedPrediction=_droppedPrediction - In the implementation block
@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
-(double)timestamp;
-(id)toString;
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(id)initWithDroppingPrediction:(double)arg1 droppedPrediction:(double)arg2 timestamp:(double)arg3 ;
-(double)droppingPrediction;
-(double)droppedPrediction;
@end
