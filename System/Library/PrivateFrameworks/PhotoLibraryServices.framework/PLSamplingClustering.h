/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@interface PLSamplingClustering : PLDataDensityClustering {

	unsigned long long _numberOfClusters;

}

@property (assign,nonatomic) unsigned long long numberOfClusters;              //@synthesize numberOfClusters=_numberOfClusters - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfClusters;
-(void)setNumberOfClusters:(unsigned long long)arg1 ;
@end
