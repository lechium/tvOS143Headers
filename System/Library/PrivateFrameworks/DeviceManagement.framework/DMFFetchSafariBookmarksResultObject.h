/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject {

	NSArray* _bookmarks;

}

@property (nonatomic,copy,readonly) NSArray * bookmarks;              //@synthesize bookmarks=_bookmarks - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bookmarks;
-(void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3 ;
-(id)initWithBookmarks:(id)arg1 ;
@end
