/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASCMetricsScrollObserverDelegate.h>

@protocol ASCViewModel;
@class UIView, ASCMetricsActivity, ASCMetrics, ASCMetricsScrollObserver, NSString;

@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate> {

	BOOL _enabled;
	BOOL _appeared;
	BOOL _settingModel;
	UIView* _view;
	ASCMetricsActivity* _activity;
	id<ASCViewModel> _model;
	ASCMetrics* _metrics;
	ASCMetricsScrollObserver* _scrollObserver;

}

@property (nonatomic,readonly) ASCMetrics * metrics;                                 //@synthesize metrics=_metrics - In the implementation block
@property (assign,getter=isAppeared,nonatomic) BOOL appeared;                        //@synthesize appeared=_appeared - In the implementation block
@property (assign,getter=isSettingModel,nonatomic) BOOL settingModel;                //@synthesize settingModel=_settingModel - In the implementation block
@property (nonatomic,retain) ASCMetricsScrollObserver * scrollObserver;              //@synthesize scrollObserver=_scrollObserver - In the implementation block
@property (nonatomic,readonly) BOOL canAppear; 
@property (nonatomic,readonly) BOOL canDisappear; 
@property (nonatomic,__weak,readonly) UIView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) ASCMetricsActivity * activity;                            //@synthesize activity=_activity - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id<ASCViewModel> model;                                   //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id<ASCViewModel>)model;
-(ASCMetricsActivity *)activity;
-(void)setActivity:(ASCMetricsActivity *)arg1 ;
-(ASCMetrics *)metrics;
-(void)setModel:(id<ASCViewModel>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIView *)view;
-(void)viewDidMoveToWindow;
-(id)initWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 metrics:(id)arg2 ;
-(void)setSettingModel:(BOOL)arg1 ;
-(void)disappearIfNeeded;
-(ASCMetricsScrollObserver *)scrollObserver;
-(BOOL)isAppeared;
-(void)setAppeared:(BOOL)arg1 ;
-(void)appearIfNeeded;
-(void)setScrollObserver:(ASCMetricsScrollObserver *)arg1 ;
-(BOOL)canAppear;
-(BOOL)isSettingModel;
-(BOOL)canDisappear;
-(void)viewDidSetHidden;
-(void)viewDidAction;
-(void)viewDidEndRenderWithPredicate:(id)arg1 ;
-(void)viewDidFailRequest:(id)arg1 withError:(id)arg2 ;
-(void)viewDidRetryFailedRequest;
@end

