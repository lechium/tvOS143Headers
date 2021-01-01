/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUIBaseTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView> {

	UILabel* _detailTextLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UILabel * detailTextLabel;                                               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                                   //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIActivityIndicatorTemplateModel> dataSource; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(UILabel *)detailTextLabel;
-(UIActivityIndicatorView *)spinnerView;
-(double)desiredHeight;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
@end

