/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString;

@interface _MKPlaceAttributionLabel : NSObject {

	UIImage* image;
	double textBaselineOffset;
	double imageBaselineOffset;
	NSString* imagePlaceholder;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double textBaselineOffset; 
@property (assign,nonatomic) double imageBaselineOffset; 
@property (nonatomic,retain) NSString * imagePlaceholder; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)imagePlaceholder;
-(double)textBaselineOffset;
-(double)imageBaselineOffset;
-(id)attributionWithString:(id)arg1 ;
-(void)setTextBaselineOffset:(double)arg1 ;
-(void)setImageBaselineOffset:(double)arg1 ;
-(void)setImagePlaceholder:(NSString *)arg1 ;
@end

