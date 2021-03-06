/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
+(void)loadCloudKitFramework;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)data;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(long long)UIActionType;
-(id)initWithShareMetadata:(id)arg1 ;
@end

