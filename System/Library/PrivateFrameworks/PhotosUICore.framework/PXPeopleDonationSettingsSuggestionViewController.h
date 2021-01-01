/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class PHPerson, UICollectionView, UIImage, PHFetchResult, NSString;

@interface PXPeopleDonationSettingsSuggestionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	PHPerson* _person;
	UICollectionView* _collectionView;
	UIImage* _image;
	PHFetchResult* _faceCrops;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) PHFetchResult * faceCrops;                      //@synthesize faceCrops=_faceCrops - In the implementation block
@property (nonatomic,readonly) PHPerson * person;                            //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPerson *)person;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)viewDidLoad;
-(id)initWithPerson:(id)arg1 ;
-(UICollectionView *)collectionView;
-(PHFetchResult *)faceCrops;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)loadDataSource;
-(void)setFaceCrops:(PHFetchResult *)arg1 ;
@end

