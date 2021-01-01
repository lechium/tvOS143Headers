/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol AVInfoPanelAudioRouteSelectionDelegate;
@class NSArray, NSDiffableDataSourceSnapshot, UICollectionViewDiffableDataSource, NSMutableDictionary, NSString;

@interface AVInfoPanelAudioRoutesCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	id<AVInfoPanelAudioRouteSelectionDelegate> _selectionDelegate;
	NSArray* _mediaOptions;
	NSDiffableDataSourceSnapshot* _currentSnapshot;
	UICollectionViewDiffableDataSource* _audioRoutesDataSource;
	NSMutableDictionary* _mediaOptionsByID;
	NSString* _focusedMediaOptionIdentifier;

}

@property (nonatomic,retain) NSDiffableDataSourceSnapshot * currentSnapshot;                                   //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * audioRoutesDataSource;                       //@synthesize audioRoutesDataSource=_audioRoutesDataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaOptionsByID;                                           //@synthesize mediaOptionsByID=_mediaOptionsByID - In the implementation block
@property (nonatomic,retain) NSString * focusedMediaOptionIdentifier;                                          //@synthesize focusedMediaOptionIdentifier=_focusedMediaOptionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<AVInfoPanelAudioRouteSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (nonatomic,retain) NSArray * mediaOptions;                                                           //@synthesize mediaOptions=_mediaOptions - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) double widthOfWidestCell; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDiffableDataSourceSnapshot *)currentSnapshot;
-(void)viewDidLoad;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)setCurrentSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(double)sectionHeaderViewHeight;
-(void)setMediaOptions:(NSArray *)arg1 ;
-(void)updateCollectionViewWithMediaOptions:(id)arg1 ;
-(double)widthOfWidestCell;
-(double)fullHeightForCellHeight:(double)arg1 ;
-(void)_didSelectItemAtIndexPath:(id)arg1 ;
-(id<AVInfoPanelAudioRouteSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<AVInfoPanelAudioRouteSelectionDelegate>)arg1 ;
-(NSArray *)mediaOptions;
-(UICollectionViewDiffableDataSource *)audioRoutesDataSource;
-(void)setAudioRoutesDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(NSMutableDictionary *)mediaOptionsByID;
-(void)setMediaOptionsByID:(NSMutableDictionary *)arg1 ;
-(NSString *)focusedMediaOptionIdentifier;
-(void)setFocusedMediaOptionIdentifier:(NSString *)arg1 ;
@end

