/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface TTProfile : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_values;
    NSMutableSet *_observedKeys;
    TTProfile *_parentProfile;
    NSString *_name;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)profileKeys;
- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (BOOL)updateProfileIfNecessary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setParentProfile:(id)arg1;
- (id)parentProfile;
- (void)setProfile:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (BOOL)validateRowCount:(id *)arg1 error:(id *)arg2;
- (BOOL)validateColumnCount:(id *)arg1 error:(id *)arg2;
- (id)scopeValueForKey:(id)arg1;
- (BOOL)typeCheckValue:(id)arg1 withOther:(id)arg2;
- (void)setScopeValue:(id)arg1 forKey:(id)arg2;
- (id)scopeValues;
- (void)setScopeValues:(id)arg1;
- (id)effectiveValues;
- (id)effectiveValueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingParentProfile;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (BOOL)setPropertyListRepresentation:(id)arg1;
- (BOOL)fontAllowsDisableAntialias;
- (id)encodingController;

@end

