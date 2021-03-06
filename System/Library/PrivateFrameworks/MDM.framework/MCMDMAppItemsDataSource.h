/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet, NSDictionary;


@protocol MCMDMAppItemsDataSource <NSObject>
@property (nonatomic,copy) NSSet * appsRequested; 
@property (assign,nonatomic) BOOL shouldReturnManagedAppsOnly; 
@property (nonatomic,copy) NSSet * itemsRequested; 
@property (nonatomic,copy) NSDictionary * appItems; 
@required
-(NSDictionary *)appItems;
-(void)setAppsRequested:(id)arg1;
-(void)setShouldReturnManagedAppsOnly:(BOOL)arg1;
-(void)setItemsRequested:(id)arg1;
-(NSSet *)appsRequested;
-(BOOL)shouldReturnManagedAppsOnly;
-(NSSet *)itemsRequested;
-(void)fetchAppItems;
-(void)setAppItems:(id)arg1;

@end

