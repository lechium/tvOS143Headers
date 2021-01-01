/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class MKBarView, _MKUILabel, UIView, NSArray, NSString;

@interface MKRatingPlatterView : MKPlaceSectionItemView {

	MKBarView* _ratingCategoryBarView;
	_MKUILabel* _categoryLabel;
	UIView* _containerView;
	NSArray* _constraints;
	double _score;
	double _scale;

}

@property (nonatomic,copy) NSString * categoryName; 
@property (assign,nonatomic) double score;                       //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double scale;                       //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(double)score;
-(void)setScale:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScore:(double)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_contentSizeChanged;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)_setupInitialAppearance;
-(void)_updateAppearance;
@end

