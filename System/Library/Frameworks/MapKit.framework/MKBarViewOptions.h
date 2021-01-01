/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface MKBarViewOptions : NSObject <NSCopying> {

	NSArray* _fillColors;
	NSArray* _gradientStops;
	UIColor* _backgroundColor;
	double _thickness;
	double _currentAmount;
	double _totalAmount;

}

@property (nonatomic,copy) NSArray * fillColors;                   //@synthesize fillColors=_fillColors - In the implementation block
@property (nonatomic,copy) NSArray * gradientStops;                //@synthesize gradientStops=_gradientStops - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double thickness;                     //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) double currentAmount;                 //@synthesize currentAmount=_currentAmount - In the implementation block
@property (assign,nonatomic) double totalAmount;                   //@synthesize totalAmount=_totalAmount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setCurrentAmount:(double)arg1 ;
-(void)setTotalAmount:(double)arg1 ;
-(void)setThickness:(double)arg1 ;
-(void)setFillColors:(NSArray *)arg1 ;
-(void)setGradientStops:(NSArray *)arg1 ;
-(NSArray *)fillColors;
-(double)thickness;
-(NSArray *)gradientStops;
-(double)totalAmount;
-(double)currentAmount;
@end

