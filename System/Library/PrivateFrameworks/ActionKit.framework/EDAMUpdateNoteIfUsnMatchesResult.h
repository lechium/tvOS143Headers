/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class EDAMNote, NSNumber;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject {

	EDAMNote* _note;
	NSNumber* _updated;

}

@property (nonatomic,retain) EDAMNote * note;                 //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) NSNumber * updated;              //@synthesize updated=_updated - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(void)setNote:(EDAMNote *)arg1 ;
-(EDAMNote *)note;
@end

