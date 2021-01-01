/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeatureView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXPhotoAnalysisStatusController, NSString;

@interface PXProtoFeaturePlaceholderView : PXProtoFeatureView <PXChangeObserver> {

	PXPhotoAnalysisStatusController* _statusController;
	NSString* _statusDescription;
	double _preferredStatusWidth;

}

@property (nonatomic,copy,readonly) NSString * statusDescription;              //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,readonly) double preferredStatusWidth;                    //@synthesize preferredStatusWidth=_preferredStatusWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)statusDescription;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)statusDescriptionDidChange;
-(void)_updateStatusDescription;
-(void)_setStatusDescription:(id)arg1 ;
-(double)preferredStatusWidth;
@end
