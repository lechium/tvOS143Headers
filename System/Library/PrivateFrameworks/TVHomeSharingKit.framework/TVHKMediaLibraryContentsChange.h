/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHKMediaLibraryRevision, NSSet;

@interface TVHKMediaLibraryContentsChange : NSObject <NSCopying> {

	TVHKMediaLibraryRevision* _revision;
	NSSet* _changedDMAPServerProtocols;

}

@property (nonatomic,copy) TVHKMediaLibraryRevision * revision;              //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy) NSSet * changedDMAPServerProtocols;               //@synthesize changedDMAPServerProtocols=_changedDMAPServerProtocols - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setRevision:(TVHKMediaLibraryRevision *)arg1 ;
-(TVHKMediaLibraryRevision *)revision;
-(NSSet *)changedDMAPServerProtocols;
-(id)initWithRevision:(id)arg1 changedDMAPServerProtocols:(id)arg2 ;
-(void)setChangedDMAPServerProtocols:(NSSet *)arg1 ;
@end

