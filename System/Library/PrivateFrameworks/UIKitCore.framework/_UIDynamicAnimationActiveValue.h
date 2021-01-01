/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIDynamicAnimationActiveValue : NSObject {

	double _value;
	double _minimumActiveValue;
	double _maximumActiveValue;
	int _type;
	double _boundaryPull;
	id _applier;
	unsigned _lowerBoundary : 1;
	unsigned _upperBoundary : 1;

}

@property (assign,nonatomic) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumActiveValue;              //@synthesize minimumActiveValue=_minimumActiveValue - In the implementation block
@property (assign,nonatomic) double maximumActiveValue;              //@synthesize maximumActiveValue=_maximumActiveValue - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
+(id)lowerBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)upperBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)activeValue:(double)arg1 ofType:(int)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)_setBoundaryPull:(double)arg1 ;
-(/*^block*/id)_applier;
-(BOOL)_isLowerBoundary;
-(BOOL)_isUpperBoundary;
-(double)minimumActiveValue;
-(double)maximumActiveValue;
-(void)setMinimumActiveValue:(double)arg1 ;
-(void)setMaximumActiveValue:(double)arg1 ;
-(double)_boundaryPull;
@end

