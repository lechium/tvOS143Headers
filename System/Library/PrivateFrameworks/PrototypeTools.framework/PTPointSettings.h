/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSettings.h>

@interface PTPointSettings : PTSettings {

	double _x;
	double _y;

}

@property (assign,x,nonatomic) double x;                      //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                      //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) CGPoint pointValue; 
+(id)settingsControllerModule;
+(BOOL)ignoresKey:(id)arg1 ;
-(CGPoint)pointValue;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(id)drillDownSummary;
-(void)setPointValue:(CGPoint)arg1 ;
@end
