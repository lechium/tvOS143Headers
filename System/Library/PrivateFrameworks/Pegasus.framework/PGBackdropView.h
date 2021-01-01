/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/__PGView.h>

@class CAFilter, NSString;

@interface PGBackdropView : __PGView {

	CAFilter* _gaussianBlurFilter;
	CAFilter* _averageColorFilter;

}

@property (nonatomic,copy) NSString * groupName; 
@property (assign,nonatomic) double gaussianBlurRadius; 
@property (assign,nonatomic) double backdropScale; 
+(Class)layerClass;
-(void)dealloc;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateFilters;
-(void)setGaussianBlurRadius:(double)arg1 ;
-(void)setBackdropScale:(double)arg1 ;
-(double)gaussianBlurRadius;
-(double)backdropScale;
@end

