/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BBDismissalItem.h>

@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem {

	double _dismissalTimeInterval;
	NSString* _dismissalHash;

}

@property (nonatomic,readonly) double dismissalTimeInterval;               //@synthesize dismissalTimeInterval=_dismissalTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissalHash;              //@synthesize dismissalHash=_dismissalHash - In the implementation block
-(id)description;
-(id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2 ;
-(BOOL)matchDismissalDictionary:(id)arg1 ;
-(double)dismissalTimeInterval;
-(NSString *)dismissalHash;
@end
