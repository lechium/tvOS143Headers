/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIRKEOTouchTracking : NSObject {

	BOOL _valid;
	long long _type;
	double _largestObservedRadius;
	Class _beganGestureClass;

}

@property (assign,nonatomic) BOOL valid;                                //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double largestObservedRadius;              //@synthesize largestObservedRadius=_largestObservedRadius - In the implementation block
@property (nonatomic,retain) Class beganGestureClass;                   //@synthesize beganGestureClass=_beganGestureClass - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(double)largestObservedRadius;
-(void)setLargestObservedRadius:(double)arg1 ;
-(Class)beganGestureClass;
-(void)setBeganGestureClass:(Class)arg1 ;
@end
