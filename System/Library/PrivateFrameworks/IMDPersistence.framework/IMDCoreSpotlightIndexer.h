/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMDCoreSpotlightIndexer <NSObject>
@required
+(BOOL)cancelIndexingForItem:(id)arg1;
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(BOOL)arg4;

@end
