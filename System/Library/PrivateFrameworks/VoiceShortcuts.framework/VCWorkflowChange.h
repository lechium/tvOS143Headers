/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VCDatabaseChange.h>

@interface VCWorkflowChange : VCDatabaseChange {

	long long _syncHash;

}

@property (nonatomic,readonly) long long syncHash;              //@synthesize syncHash=_syncHash - In the implementation block
+(int)messageType;
+(Class)recordClass;
+(unsigned long long)databaseObjectType;
+(long long)syncHashForRecord:(id)arg1 ;
-(long long)syncHash;
@end

