/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNCDContainerPredicate.h>

@class NSString;

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate> {

	BOOL _includeDisabledContainers;

}

@property (assign,nonatomic) BOOL includeDisabledContainers;              //@synthesize includeDisabledContainers=_includeDisabledContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)cn_coreDataPredicate;
-(id)cn_topLevelFilter;
-(id)cn_persistenceFilterRequest;
-(id)initWithIncludeDisabledContainers:(BOOL)arg1 ;
-(BOOL)includeDisabledContainers;
-(void)setIncludeDisabledContainers:(BOOL)arg1 ;
@end
