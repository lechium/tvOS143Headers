/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXFilterState <NSCopying>
@property (nonatomic,readonly) BOOL isFiltering; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedFooterDescription; 
@required
-(NSString *)localizedDescription;
-(id)predicateForUseCase:(unsigned long long)arg1;
-(BOOL)isFiltering;
-(NSString *)localizedFooterDescription;

@end
