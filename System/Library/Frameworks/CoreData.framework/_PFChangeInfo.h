/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObject, NSIndexPath, _NSDefaultSectionInfo;

@interface _PFChangeInfo : NSObject {

	NSManagedObject* _object;
	unsigned long long _changeType;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _finalIndexPath;
	_NSDefaultSectionInfo* _startSectionInfo;
	_NSDefaultSectionInfo* _finalSectionInfo;

}

@property (nonatomic,retain,readonly) NSManagedObject * object;              //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(NSManagedObject *)object;
@end
